create table sinoqcaf
(
  siqccst     varchar2(5) default ' ' not null,
  siqcrid     varchar2(8) default ' ' not null,
  siqccat     varchar2(7) default ' ' not null,
  siqcunt     varchar2(15) default ' ' not null,
  siqcpd      varchar2(30) default ' ' not null,
  siqcpn      varchar2(30) default ' ' not null,
  siqcqty     number(14,2) default 0 not null,
  siqcsta     varchar2(3) default ' ' not null,
  siqcuid     varchar2(4) default ' ' not null,
  siqcdat     varchar2(8) default ' ' not null,
  siqctim     varchar2(5) default ' ' not null,
  siqcpor     varchar2(2) default ' ' not null,
  siqcpdt     varchar2(8) default ' ' not null,
  siqcptm     varchar2(5) default ' ' not null,
  siqcpid     varchar2(4) default ' ' not null,
  siqcppo     varchar2(2) default ' ' not null,
  siqcori     varchar2(3) default ' ' not null,
  siqcpty     number(1,0) default 0 not null,
  siqcpqt     number(14,2) default 0 not null,
  siqcect     number(16,4) default 0 not null,
  siqcgsta    number(16,4) default 0 not null,
  siqccan     varchar2(30) default ' ' not null,
  siqcord     varchar2(7) default ' ' not null,
  siqcreq     varchar2(8) default ' ' not null,
  siqcedt     varchar2(8) default ' ' not null,
  siqcsup     varchar2(5) default ' ' not null,
  siqcsut     varchar2(15) default ' ' not null,
  siqcpgp     varchar2(5) default ' ' not null,
  siqcgst     varchar2(6) default ' ' not null,
  siqccon     varchar2(10) default ' ' not null,
  siqccdt     varchar2(8) default ' ' not null,
  siqcspa     varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinoqca1 primary key( 
siqccst,
siqcrid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinoqca2 on sinoqcaf
(
siqcreq,
siqccst,
siqcrid
)
  tablespace pas_indx; 
create unique index sinoqca3 on sinoqcaf
(
siqcord,
siqcsup,
siqcpn,
siqccst,
siqcrid
)
  tablespace pas_indx; 
create unique index sinoqca4 on sinoqcaf
(
siqcord,
siqcsup,
siqccst,
siqcpn,
siqcrid
)
  tablespace pas_indx; 
