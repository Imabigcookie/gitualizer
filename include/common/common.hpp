#ifndef COMMON_HPP
#define COMMON_HPP

#include <cstdint>

namespace gitualizer
{
	enum FileStatus
	{
		ADDED = 1,
		MODIFIED = 2,
		REMOVED = 4
	};

	struct File //������ ����� ��������� �� �����������
	{
		char*		_filename;	//��� �����
		FileStatus	_status;	//������ ����� 1 - ��������, 2 - �������, 4 - ������
	};

	struct Modification //��������� ������������ �����������
	{
		char*		_author;		//��� ������ �����������
		char*		_message;		//��������� � ������������ � �����������
		char*		_date;			//���� ������������ �����������
		File*		_files;			//������ ���������� �� ����� � �����������
		uint32_t	_countFiles;	//���������� ������ � �����������
	};
}

#endif // COMMON_HPP
