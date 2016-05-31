#!/bin/bash 

repeat()
{
    while true
    do
        $@  &&  return
    done
}

repeat()
{
    while :
    do
        $@  &&  return
    done
}
