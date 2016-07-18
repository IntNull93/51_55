#!/bin/bash

read_dir(){
    for i in $1/*
    do
        if [ -d $i ]
        then
            read_dir $i
        else
            echo $i
        fi
    done

}

read_dir $1
