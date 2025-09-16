create table mehlegaf
(
  dmhleadm    varchar2(8) default ' ' not null,
  mhledate    varchar2(8) default ' ' not null,
  mhletime    varchar2(5) default ' ' not null,
  mhlestat    varchar2(3) default ' ' not null,
  mhlesent    varchar2(1) default ' ' not null,
  mhlerevw    varchar2(3) default ' ' not null,
  mhleflag    varchar2(1) default ' ' not null,
  mhleempc    varchar2(6) default ' ' not null,
  mhleempt    varchar2(1) default ' ' not null,
  mhlespar    varchar2(8) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehlega1 primary key( 
dmhleadm,
mhledate,
mhletime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mehlega2 on mehlegaf
(
mhledate,
mhletime,
dmhleadm
)
  tablespace pas_indx; 
