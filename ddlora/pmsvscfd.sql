create table pmsvscaf
(
  pmvcvsid    varchar2(3) default ' ' not null,
  pmvccode    varchar2(30) default ' ' not null,
  pmvcptrm    varchar2(256) default ' ' not null,
  pmvcfnam    varchar2(256) default ' ' not null,
  pmvcactv    varchar2(1) default ' ' not null,
  pmvcspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsvsca1 primary key( 
pmvcvsid,
pmvccode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
