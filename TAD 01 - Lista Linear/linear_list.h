#pragma once


namespace tad {

    class LinearList {

        private:
            int storage[];

        public:
            LinearList();

            /**
             * @brief   Inserts an element at a given position in the list.
             * 
             * @param   pos an integer representing the location inside the list to place that element
             * @return  1 if the element was inserted, 0 otherwise.
             */
            char insertAt(int pos);


            /**
             * @brief   Removes an element from the list at a specific position.
             * 
             * @param   pos an integer that defines where to remove the element
             * @return  the removed element
             */
            int removeAt(int pos);
            char clear();


            int front();
            int back();
            int getItem(int pos);

            int size();

    };

}
