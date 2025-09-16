create table patbrnsf
(
  brdate      varchar2(6) default ' ' not null,
  bradmn      number(8,0) default 0 not null,
  brspare     varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patbrns1 primary key( 
brdate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
