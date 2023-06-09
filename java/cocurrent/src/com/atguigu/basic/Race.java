package com.atguigu.basic;

import javax.naming.Name;

public class Race implements  Runnable{

    private static String winner;
    @Override
    public void run() {

        for(int i = 0;i<=100;i++){
            boolean flag = gameOver(i);
            if (flag){
                break;
            }
            System.out.println(Thread.currentThread().getName() + "----第" + i + "步");
        }
    }

    public boolean gameOver(int steps){
        if(winner != null){
            return true;
        }
        if (steps>=100){
            winner=Thread.currentThread().getName();
            System.out.println("winner is " + winner);
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        Race race = new Race();
        new Thread(race, "兔子").start();
        new Thread(race,"乌龟").start();
    }
}
