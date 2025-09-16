create table pmsvstaf
(
  pmvtvsid    varchar2(3) default ' ' not null,
  pmvtvsnm    varchar2(50) default ' ' not null,
  pmvtvurl    varchar2(256) default ' ' not null,
  pmvtfurl    varchar2(256) default ' ' not null,
  pmvthdpe    varchar2(30) default ' ' not null,
  pmvtspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsvsta1 primary key( 
pmvtvsid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
