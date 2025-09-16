create table fmsayyyy
(
  fmsrbat     varchar2(5) default ' ' not null,
  fmsruniq    varchar2(3) default ' ' not null,
  fmsrledg    varchar2(2) default ' ' not null,
  fmsracct    varchar2(12) default ' ' not null,
  fmsrdate    varchar2(8) default ' ' not null,
  fmsrref     varchar2(15) default ' ' not null,
  fmsrunit    number(17,5) default 0 not null,
  fmsrspar    varchar2(25) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsstra1 primary key( 
fmsrbat,
fmsruniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsstra2 on fmsayyyy
(
fmsrledg,
fmsracct,
fmsrdate,
fmsrbat,
fmsruniq
)
  tablespace pas_indx; 
