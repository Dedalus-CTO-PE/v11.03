create table emrdlaaf
(
  emdaadmn    varchar2(8) default ' ' not null,
  emdadate    varchar2(8) default ' ' not null,
  emdatime    varchar2(5) default ' ' not null,
  emdawuid    varchar2(10) default ' ' not null,
  emdarecd    varchar2(3) default ' ' not null,
  emdacomm    varchar2(40) default ' ' not null,
  emdaspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrdlaa1 primary key( 
emdaadmn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrdlaa2 on emrdlaaf
(
emdadate,
emdatime,
emdaadmn
)
  tablespace pas_indx; 
