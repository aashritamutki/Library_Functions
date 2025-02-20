// Traversing 


    template<class T>
    void Queue<T>::goto_start()
    {
        if(is__empty())
            return;
        

        self.Current_Data = &self.start->obj;
        Current_Data = &(*self.Current_Data);

        self.Traverse_from_start();
    }

    template<class T>
    void Queue<T>::get_next()
    {
        if(self.Current_Data == &(self.end->obj))
        {
              std::cout<<"\n Queue has reached the End. \n";
              return;
        }

        self.Traverse_Next();

        self.Current_Data = &self.current->obj;
        Current_Data = &(*self.Current_Data);
    }
    
