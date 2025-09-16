create table mrtrqdaf
(
  mrrdrqno    varchar2(10) default ' ' not null,
  mrrdrkey    varchar2(10) default ' ' not null,
  mrrdfill    varchar2(1) default ' ' not null,
  mrrdfuid    varchar2(10) default ' ' not null,
  mrrdspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtrqdr1 primary key( 
mrrdrqno,
mrrdrkey)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mrtrqdr2 on mrtrqdaf
(
mrrdrkey,
mrrdrqno
)
  tablespace pas_indx; 
