package main

import (
    . "fmt"
    "runtime"
    "sync"
)

var i = 0

func goThread1()
{
    for j := 0; j < 1000000; j++ 
    {
        i++
    }
}

func goThread2()
{
    for j := 0; j < 1000000; j++ 
    {
        i--
    }
}
func main() {
    runtime.GOMAXPROCS(runtime.NumCPU())
    go goThread1()
    go goThread2()
    time.Sleep(time.Second * 1)
    fmt.Println(i)
}   
