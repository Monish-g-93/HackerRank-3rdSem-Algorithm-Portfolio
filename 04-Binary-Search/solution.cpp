using System;
using System.Collections.Generic;
using System.IO;

class Node
{
    public int Data;
    public Node Left;
    public Node Right;

    public Node(int data)
    {
        Data = data;
        Left = null;
        Right = null;
    }
}

class Solution
{
    static Node Insert(Node root, int value)
    {
        if (root == null)
        {
            return new Node(value);
        }

        if (value < root.Data)
        {
            root.Left = Insert(root.Left, value);
        }
        else
        {
            root.Right = Insert(root.Right, value);
        }

        return root;
    }

    static void Preorder(Node root)
    {
        if (root == null)
            return;

        Console.Write(root.Data + " ");

        Preorder(root.Left);
        Preorder(root.Right);
    }

    static void Main(String[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine());

        string[] values = Console.ReadLine().Split(' ');

        Node root = null;

        for (int i = 0; i < n; i++)
        {
            int value = Convert.ToInt32(values[i]);
            root = Insert(root, value);
        }

        Preorder(root);
    }
}
