create table sinaudpc
(
  sipcaudd    varchar2(8) default ' ' not null,
  sipcaudt    varchar2(8) default ' ' not null,
  sipcaudp    varchar2(2) default ' ' not null,
  sipcaudr    varchar2(1) default ' ' not null,
  sipcauds    number(1,0) default 0 not null,
  sipcaudo    varchar2(4) default ' ' not null,
  sipcpon     varchar2(7) default ' ' not null,
  sipcitm     varchar2(3) default ' ' not null,
  sipccst     varchar2(5) default ' ' not null,
  sipcprd     varchar2(5) default ' ' not null,
  sipcdat     varchar2(6) default ' ' not null,
  sipcwar     varchar2(5) default ' ' not null,
  sipccat     varchar2(7) default ' ' not null,
  sipcpn      varchar2(30) default ' ' not null,
  sipcpd      varchar2(30) default ' ' not null,
  sipccon     varchar2(10) default ' ' not null,
  sipccdt     varchar2(8) default ' ' not null,
  sipcsut     varchar2(15) default ' ' not null,
  sipcedd     varchar2(8) default ' ' not null,
  sipcfdd     varchar2(8) default ' ' not null,
  sipcoqt     number(14,2) default 0 not null,
  sipciqt     number(14,2) default 0 not null,
  sipcrqt     number(14,2) default 0 not null,
  sipcect     number(16,4) default 0 not null,
  sipcgsta    number(16,4) default 0 not null,
  sipctcr     number(14,2) default 0 not null,
  sipctgs     number(14,2) default 0 not null,
  sipctin     number(14,2) default 0 not null,
  sipcigs     number(14,2) default 0 not null,
  sipcoqo     number(14,2) default 0 not null,
  sipcoop     number(16,4) default 0 not null,
  sipcogs     number(16,4) default 0 not null,
  sipcgst     varchar2(6) default ' ' not null,
  sipcur1     varchar2(15) default ' ' not null,
  sipcur2     varchar2(15) default ' ' not null,
  sipcud1     varchar2(8) default ' ' not null,
  sipcud2     varchar2(8) default ' ' not null,
  sipcuy1     varchar2(1) default ' ' not null,
  sipcuy2     varchar2(1) default ' ' not null,
  sipcspa     varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index sinaudpc on sinaudpc
(
sipcaudd,
sipcaudt,
sipcaudp,
sipcaudr
)
tablespace pas_indx; 
create table sinpocaf
(
  sipcpon     varchar2(7) default ' ' not null,
  sipcitm     varchar2(3) default ' ' not null,
  sipccst     varchar2(5) default ' ' not null,
  sipcprd     varchar2(5) default ' ' not null,
  sipcdat     varchar2(6) default ' ' not null,
  sipcwar     varchar2(5) default ' ' not null,
  sipccat     varchar2(7) default ' ' not null,
  sipcpn      varchar2(30) default ' ' not null,
  sipcpd      varchar2(30) default ' ' not null,
  sipccon     varchar2(10) default ' ' not null,
  sipccdt     varchar2(8) default ' ' not null,
  sipcsut     varchar2(15) default ' ' not null,
  sipcedd     varchar2(8) default ' ' not null,
  sipcfdd     varchar2(8) default ' ' not null,
  sipcoqt     number(14,2) default 0 not null,
  sipciqt     number(14,2) default 0 not null,
  sipcrqt     number(14,2) default 0 not null,
  sipcect     number(16,4) default 0 not null,
  sipcgsta    number(16,4) default 0 not null,
  sipctcr     number(14,2) default 0 not null,
  sipctgs     number(14,2) default 0 not null,
  sipctin     number(14,2) default 0 not null,
  sipcigs     number(14,2) default 0 not null,
  sipcoqo     number(14,2) default 0 not null,
  sipcoop     number(16,4) default 0 not null,
  sipcogs     number(16,4) default 0 not null,
  sipcgst     varchar2(6) default ' ' not null,
  sipcur1     varchar2(15) default ' ' not null,
  sipcur2     varchar2(15) default ' ' not null,
  sipcud1     varchar2(8) default ' ' not null,
  sipcud2     varchar2(8) default ' ' not null,
  sipcuy1     varchar2(1) default ' ' not null,
  sipcuy2     varchar2(1) default ' ' not null,
  sipcspa     varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinpoca1 primary key( 
sipcpon,
sipcitm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinpoca2 on sinpocaf
(
sipccst,
sipcdat,
sipcpon,
sipcitm
)
  tablespace pas_indx; 
create unique index sinpoca3 on sinpocaf
(
sipccat,
sipcdat,
sipcpon,
sipcitm
)
  tablespace pas_indx; 
create unique index sinpoca4 on sinpocaf
(
sipcprd,
sipcdat,
sipcpon,
sipcitm
)
  tablespace pas_indx; 
create unique index sinpoca5 on sinpocaf
(
sipccst,
sipcedd,
sipcpon,
sipcitm
)
  tablespace pas_indx; 
create unique index sinpoca6 on sinpocaf
(
sipccat,
sipcedd,
sipcpon,
sipcitm
)
  tablespace pas_indx; 
create  index sinpoca7 on sinpocaf
(
sipcdat
)
  tablespace pas_indx; 
create  index sinpoca8 on sinpocaf
(
sipccat,
sipcpd
)
  tablespace pas_indx; 
