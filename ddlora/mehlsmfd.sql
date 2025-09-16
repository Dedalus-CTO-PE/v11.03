create table mehlsmaf
(
  mhlmcrls    varchar2(3) default ' ' not null,
  mhlmvnls    varchar2(3) default ' ' not null,
  mhlmactv    varchar2(1) default ' ' not null,
  mhlmdina    varchar2(8) default ' ' not null,
  mhlmcuid    varchar2(10) default ' ' not null,
  mhlmcdat    varchar2(8) default ' ' not null,
  mhlmctim    varchar2(8) default ' ' not null,
  mhlmiuid    varchar2(10) default ' ' not null,
  mhlmidat    varchar2(8) default ' ' not null,
  mhlmitim    varchar2(8) default ' ' not null,
  mhlmspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehlsma1 primary key( 
mhlmcrls,
mhlmvnls)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
