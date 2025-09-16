create table fmszyyyy
(
  fmszbat     varchar2(5) default ' ' not null,
  fmszuniq    varchar2(3) default ' ' not null,
  fmszledg    varchar2(2) default ' ' not null,
  fmszacct    varchar2(12) default ' ' not null,
  fmszdate    varchar2(8) default ' ' not null,
  fmszref     varchar2(15) default ' ' not null,
  fmszunit    number(17,5) default 0 not null,
  fmszspar    varchar2(25) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsscza1 primary key( 
fmszbat,
fmszuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsscza2 on fmszyyyy
(
fmszledg,
fmszacct,
fmszdate,
fmszbat,
fmszuniq
)
  tablespace pas_indx; 
