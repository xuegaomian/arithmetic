package com;/*
 *@Author: XueGaoMian
 *@Date: 2017/8/29 21:07
 *@Description:满二叉树中找出三个已知节点的最小公共父节点
 */

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int layer = scanner.nextInt();
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
        int min = a < b ? (a < c ? a : c) : (b < c ? b : c);
        int left = 1;
        int right = (int)Math.pow(2, layer) - 1;
        int middle = (left + right) / 2;
        while(true){
            if(middle > min && middle < max){
                break;
            }
            if(min > middle){
                left = middle + 1;
                middle = (left + right) / 2;
            }else if(max < middle){
                right = middle - 1;
                middle = (left + right) / 2;
            }
        }
        System.out.println(middle);
    }
}