create table mrtstfaf
(
  mrstcode    varchar2(6) default ' ' not null,
  mrsttitl    varchar2(6) default ' ' not null,
  mrstsnam    varchar2(20) default ' ' not null,
  mrstgnam    varchar2(25) default ' ' not null,
  mrstdept    varchar2(3) default ' ' not null,
  mrstcont    varchar2(30) default ' ' not null,
  mrstieph    varchar2(12) default ' ' not null,
  mrstbhph    varchar2(12) default ' ' not null,
  mrstahph    varchar2(12) default ' ' not null,
  mrstpagr    varchar2(12) default ' ' not null,
  mrstbcod    varchar2(20) default ' ' not null,
  mrststat    number(1,0) default 0 not null,
  mrstusag    number(1,0) default 0 not null,
  mrstspar    varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtstfa1 primary key( 
mrstcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mrtstfa2 on mrtstfaf
(
mrstdept,
mrstcode
)
  tablespace pas_indx; 
create unique index mrtstfa3 on mrtstfaf
(
mrstsnam,
mrstcode
)
  tablespace pas_indx; 
