template < typename T>
class Vector {
	public:
		Vector() {
			// allocate 2 elements
			Realloc(2);
		}

	private:
		void ReAlloc(size_t newCapacity)
		{
			// 1. allocate a new block of memory
			// 2. move old elements into new block
			// 3. delete 

			T* newBlock = new T[newCapacity];
			
			size_t size = m_Size;
			if (newCapacity <  size)
				size = newCapacity;
 
			for (size_t i = 0; i < m_Size; i++)
				newBlock[i] = m_Data[i];

			delete[] m_Data;
			
			m_Data = newBlock;
			m_Capacity = newCapacity;

		}

		void PushBack(const T& value)
		{
			if (m_Size)	
		}

	private:
		T* m_Data = nullptr;

		size_t m_Size = 0;
		size_t m_Capacity = 0;
};
