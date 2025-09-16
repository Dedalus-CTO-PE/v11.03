create table emrlckaf
(
  emlovist    varchar2(8) default ' ' not null,
  emlotyps    varchar2(3) default ' ' not null,
  emlouser    varchar2(10) default ' ' not null,
  emloextr    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrlcka1 primary key( 
emlovist,
emlotyps)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
