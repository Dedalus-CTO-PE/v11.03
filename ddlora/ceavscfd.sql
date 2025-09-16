create table ceavscaf
(
  cevscat     varchar2(2) default ' ' not null,
  cevsdes     varchar2(35) default ' ' not null,
  cevsseq     varchar2(2) default ' ' not null,
  cevsur1     varchar2(30) default ' ' not null,
  cevsur2     varchar2(30) default ' ' not null,
  cevsud1     varchar2(8) default ' ' not null,
  cevsud2     varchar2(8) default ' ' not null,
  cevsuy1     varchar2(1) default ' ' not null,
  cevsuy2     varchar2(1) default ' ' not null,
  cevsspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceavsca1 primary key( 
cevscat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ceavsca2 on ceavscaf
(
cevsseq,
cevscat
)
  tablespace pas_indx; 
