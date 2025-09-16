create table pathospf
(
  hoscode     varchar2(4) default ' ' not null,
  dhosindx    varchar2(2) default ' ' not null,
  hosdesc     varchar2(30) default ' ' not null,
  hosrun      varchar2(30) default ' ' not null,
  hosrunr     varchar2(30) default ' ' not null,
  pthoactv    varchar2(1) default ' ' not null,
  pthorunb    varchar2(20) default ' ' not null,
  hosspar     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pathosp1 primary key( 
hoscode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pathosp2 on pathospf
(
dhosindx
)
  tablespace pas_indx; 
