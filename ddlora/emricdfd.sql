create table emricdaf
(
  emic9cod    varchar2(9) default ' ' not null,
  emicdesc    varchar2(70) default ' ' not null,
  emic10cd    varchar2(9) default ' ' not null,
  emicactv    number(1,0) default 0 not null,
  emicvemd    varchar2(9) default ' ' not null,
  emickeyw    varchar2(70) default ' ' not null,
  emicmeth    varchar2(1) default ' ' not null,
  emicspar    varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emricda1 primary key( 
emic9cod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emricda2 on emricdaf
(
emicdesc,
emic9cod
)
  tablespace pas_indx; 
create unique index emricda3 on emricdaf
(
emic10cd,
emic9cod
)
  tablespace pas_indx; 
create unique index emricda4 on emricdaf
(
emicvemd,
emic9cod
)
  tablespace pas_indx; 
