using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace csharp_Process
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("번호를 입력하세요." + Environment.NewLine +
                "1번 - 전체 Process / 2번 - 개별 Process");
            string result = Console.ReadLine();
            if (result == "1")
            {
                try
                {
                    Process[] allProc = Process.GetProcesses();
                    int a = 1;
                    Console.WriteLine("-------------- 모든 프로세스 정보 ---------------");
                    Console.WriteLine("현재 실행중인 모든 포로세스 숫자 : {0}", allProc.Length);
                    foreach (Process b in allProc)
                    {
                        try
                        {
                            Console.WriteLine("-------{0}번째 프로세스---------------", a++);
                            ProcessInfo(b);
                            Console.WriteLine();
                        }
                        catch (Exception)
                        {

                        }
                    }
                }
                catch (Exception)
                {

                }
                Console.ReadLine();
            }     else if (result =="2")
            {
                Console.WriteLine("프로세스의 이름을 입력하십시오 : ");
                string result2 = Console.ReadLine();
                foreach (var processinfo in Process.GetProcessesByName(result2))
                {
                    Console.WriteLine("Process : {0}", processinfo.ProcessName);
                    Console.WriteLine("시작 시간 : {0}", processinfo.StartTime);
                    Console.WriteLine("Process ID : {0}", processinfo.Id);
                    Console.WriteLine("메모리 : {0}", processinfo.VirtualMemorySize);
                    Console.WriteLine("Process Path : {0}", processinfo.MainModule.FileName);
                    Console.WriteLine("Process MachineName : {0}", processinfo.MachineName);
                    Console.WriteLine("Process MainWindowTitle : {0}", processinfo.MainWindowTitle);
                    Console.WriteLine("Process PagedMemorySize : {0}", processinfo.PagedMemorySize);
                    Console.WriteLine("Process ToString : {0}", processinfo.ToString());


                }
            }
        }
        private static void ProcessInfo(Process processinfo)
        {
            Console.WriteLine("Process : {0}", processinfo.ProcessName);
            Console.WriteLine("시작 시간 : {0}", processinfo.StartTime);
            Console.WriteLine("Process ID : {0}", processinfo.Id);
            Console.WriteLine("메모리 : {0}", processinfo.VirtualMemorySize);
            Console.WriteLine("Process Path : {0}", processinfo.MainModule.FileName );
            Console.WriteLine("Process MachineName : {0}", processinfo.MachineName);
            Console.WriteLine("Process MainWindowTitle : {0}", processinfo.MainWindowTitle);
            Console.WriteLine("Process PagedMemorySize : {0}", processinfo.PagedMemorySize);
            Console.WriteLine("Process ToString : {0}", processinfo.ToString());



        }
    }

}
