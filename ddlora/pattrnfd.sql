create table pattranf
(
  tward       varchar2(3) default ' ' not null,
  tbed        varchar2(3) default ' ' not null,
  tdate       varchar2(8) default ' ' not null,
  ttime       varchar2(8) default ' ' not null,
  tmove       varchar2(1) default ' ' not null,
  turno       varchar2(8) default ' ' not null,
  dtadmn      varchar2(8) default ' ' not null,
  tratef      number(14,2) default 0 not null,
  trateg      number(14,2) default 0 not null,
  tdisc       number(14,2) default 0 not null,
  tallw       number(14,2) default 0 not null,
  tatype      varchar2(3) default ' ' not null,
  tadoct      varchar2(6) default ' ' not null,
  trateh      number(14,2) default 0 not null,
  textra      number(14,2) default 0 not null,
  pttritfs    number(14,2) default 0 not null,
  tform12a    number(14,2) default 0 not null,
  trcdate     varchar2(8) default ' ' not null,
  trctime     varchar2(8) default ' ' not null,
  trbtyp      varchar2(3) default ' ' not null,
  trbend      number(3,0) default 0 not null,
  tchstat     varchar2(3) default ' ' not null,
  tdept       varchar2(3) default ' ' not null,
  pttrltyp    varchar2(3) default ' ' not null,
  dpttrepn    varchar2(2) default ' ' not null,
  pttrepsd    number(1,0) default 0 not null,
  pttrlspt    number(14,2) default 0 not null,
  pttrlsrb    number(14,2) default 0 not null,
  pttraend    number(4,0) default 0 not null,
  pttradpt    number(14,2) default 0 not null,
  pttradrb    number(14,2) default 0 not null,
  pttrnhac    varchar2(3) default ' ' not null,
  pttroper    varchar2(4) default ' ' not null,
  pttrauat    varchar2(1) default ' ' not null,
  pttrcdat    varchar2(8) default ' ' not null,
  pttrctim    varchar2(8) default ' ' not null,
  pttrcuid    varchar2(4) default ' ' not null,
  pttrltsc    varchar2(5) default ' ' not null,
  pttrucid    varchar2(10) default ' ' not null,
  pttruuid    varchar2(10) default ' ' not null,
  pttrclty    varchar2(3) default ' ' not null,
  pttrtrty    varchar2(3) default ' ' not null,
  pttrteam    varchar2(5) default ' ' not null,
  pttrrstr    varchar2(10) default ' ' not null,
  pttrresi    varchar2(10) default ' ' not null,
  pttrcase    varchar2(10) default ' ' not null,
  pttrfsrc    varchar2(3) default ' ' not null,
  pttrhfnd    varchar2(6) default ' ' not null,
  pttrftbl    varchar2(8) default ' ' not null,
  pttrhfmn    varchar2(19) default ' ' not null,
  pttrhfcn    varchar2(40) default ' ' not null,
  pttrspar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pattran1 primary key( 
tward,
tbed,
tdate,
ttime,
dtadmn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pattran2 on pattranf
(
dtadmn,
tdate,
ttime,
tward,
tbed
)
  tablespace pas_indx; 
create unique index pattran3 on pattranf
(
tadoct,
tdate,
ttime,
tward,
tbed,
dtadmn
)
  tablespace pas_indx; 
create unique index pattran4 on pattranf
(
tward,
tdate,
ttime,
tbed,
dtadmn
)
  tablespace pas_indx; 
create unique index pattran5 on pattranf
(
tdate,
ttime,
tmove,
tward,
tbed,
dtadmn
)
  tablespace pas_indx; 
create unique index pattran6 on pattranf
(
pttrcdat,
pttrctim,
dtadmn,
tdate,
ttime,
tward,
tbed
)
  tablespace pas_indx; 
