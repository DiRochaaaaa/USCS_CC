﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace program
{
    class Program
    {
        static void Main(string[] args)
        {
            pessoa p1 = new pessoa();
            pessoa p2 = new pessoa();
            pessoa p3 = new pessoa();

            //p1.nome = "Ana";
            //p2.nome = "Paulo";
            //p3.nome = "Lia";
            p1.setNome("Ana");
            p2.setNome("Paulo");
            p3.setNome("Lia");

            //p1.idade = 23;
            //p2.idade = 35;
            //p3.idade = 12;
            p1.setIdade(23);
            p2.setIdade(35);
            p3.setIdade(12);

            //p1.sexo = 'F';
            //p2.sexo = 'M';
            //p3.sexo = 'F';
            p1.setSexo('F');
            p2.setSexo('M');
            p3.setSexo('F');


            Console.WriteLine(p1.getNome() + " " + p1.getIdade() + " " + p1.getSexo());
            Console.WriteLine(p2.getNome() + " " + p2.getIdade() + " " + p2.getSexo());
            Console.WriteLine(p3.getNome() + " " + p3.getIdade() + " " + p3.getSexo());

            Console.ReadKey();

        }
    }
}
