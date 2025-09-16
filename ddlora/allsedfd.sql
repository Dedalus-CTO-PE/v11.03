create table allsedaf
(
  alseurno    varchar2(8) default ' ' not null,
  alsevisn    varchar2(8) default ' ' not null,
  alseenct    varchar2(8) default ' ' not null,
  alsedttm    varchar2(14) default ' ' not null,
  alsemtyp    varchar2(7) default ' ' not null,
  alseerid    varchar2(9) default ' ' not null,
  dalsecnt    varchar2(3) default ' ' not null,
  alsedesc    varchar2(100) default ' ' not null,
  alsespar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allseda1 primary key( 
alseurno,
alsevisn,
alseenct,
alsedttm,
alsemtyp,
alseerid,
dalsecnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allseda2 on allsedaf
(
alseerid,
alseurno,
alsevisn,
alseenct,
alsedttm,
alsemtyp,
dalsecnt
)
  tablespace pas_indx; 
