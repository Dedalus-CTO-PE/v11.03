create table hl7zadaf
(
  dzadin01    varchar2(20) default ' ' not null,
  zadin02     varchar2(3) default ' ' not null,
  dzadin03    varchar2(2) default ' ' not null,
  dzadin04    varchar2(2) default ' ' not null,
  dzadin05    varchar2(2) default ' ' not null,
  zad001      varchar2(30) default ' ' not null,
  zad002      varchar2(30) default ' ' not null,
  zad003      varchar2(30) default ' ' not null,
  zad004      varchar2(25) default ' ' not null,
  zad005      varchar2(8) default ' ' not null,
  zad006      varchar2(6) default ' ' not null,
  zad007      varchar2(8) default ' ' not null,
  zad008      varchar2(2) default ' ' not null,
  zad009      varchar2(26) default ' ' not null,
  zad010      varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7zad01 primary key( 
dzadin01,
zadin02,
dzadin03,
dzadin04,
dzadin05)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
