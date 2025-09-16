create table patdepaf
(
  ptdpdept    varchar2(3) default ' ' not null,
  ptdpward    varchar2(3) default ' ' not null,
  ptdpdate    varchar2(8) default ' ' not null,
  ptdpnbed    number(4,0) default 0 not null,
  ptdpspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patdepa1 primary key( 
ptdpdept,
ptdpward,
ptdpdate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patdepa2 on patdepaf
(
ptdpward,
ptdpdept,
ptdpdate
)
  tablespace pas_indx; 
