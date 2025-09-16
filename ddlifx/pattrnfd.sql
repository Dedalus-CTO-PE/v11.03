create table pattranf
(
  tward       char(3) default ' ' not null,
  tbed        char(3) default ' ' not null,
  tdate       char(8) default ' ' not null,
  ttime       char(8) default ' ' not null,
  tmove       char(1) default ' ' not null,
  turno       char(8) default ' ' not null,
  dtadmn      char(8) default ' ' not null,
  tratef      decimal(14,2) default 0 not null,
  trateg      decimal(14,2) default 0 not null,
  tdisc       decimal(14,2) default 0 not null,
  tallw       decimal(14,2) default 0 not null,
  tatype      char(3) default ' ' not null,
  tadoct      char(6) default ' ' not null,
  trateh      decimal(14,2) default 0 not null,
  textra      decimal(14,2) default 0 not null,
  pttritfs    decimal(14,2) default 0 not null,
  tform12a    decimal(14,2) default 0 not null,
  trcdate     char(8) default ' ' not null,
  trctime     char(8) default ' ' not null,
  trbtyp      char(3) default ' ' not null,
  trbend      decimal(3,0) default 0 not null,
  tchstat     char(3) default ' ' not null,
  tdept       char(3) default ' ' not null,
  pttrltyp    char(3) default ' ' not null,
  dpttrepn    char(2) default ' ' not null,
  pttrepsd    decimal(1,0) default 0 not null,
  pttrlspt    decimal(14,2) default 0 not null,
  pttrlsrb    decimal(14,2) default 0 not null,
  pttraend    decimal(4,0) default 0 not null,
  pttradpt    decimal(14,2) default 0 not null,
  pttradrb    decimal(14,2) default 0 not null,
  pttrnhac    char(3) default ' ' not null,
  pttroper    char(4) default ' ' not null,
  pttrauat    char(1) default ' ' not null,
  pttrcdat    char(8) default ' ' not null,
  pttrctim    char(8) default ' ' not null,
  pttrcuid    char(4) default ' ' not null,
  pttrltsc    char(5) default ' ' not null,
  pttrucid    char(10) default ' ' not null,
  pttruuid    char(10) default ' ' not null,
  pttrclty    char(3) default ' ' not null,
  pttrtrty    char(3) default ' ' not null,
  pttrteam    char(5) default ' ' not null,
  pttrrstr    char(10) default ' ' not null,
  pttrresi    char(10) default ' ' not null,
  pttrcase    char(10) default ' ' not null,
  pttrfsrc    char(3) default ' ' not null,
  pttrhfnd    char(6) default ' ' not null,
  pttrftbl    char(8) default ' ' not null,
  pttrhfmn    char(19) default ' ' not null,
  pttrhfcn    char(40) default ' ' not null,
  pttrspar    char(40) default ' ' not null,
  lf          char(1)
);
create unique index pattran1 on pattranf
(
tward,
tbed,
tdate,
ttime,
dtadmn
);
create unique index pattran2 on pattranf
(
dtadmn,
tdate,
ttime,
tward,
tbed
);
create unique index pattran3 on pattranf
(
tadoct,
tdate,
ttime,
tward,
tbed,
dtadmn
);
create unique index pattran4 on pattranf
(
tward,
tdate,
ttime,
tbed,
dtadmn
);
create unique index pattran5 on pattranf
(
tdate,
ttime,
tmove,
tward,
tbed,
dtadmn
);
create unique index pattran6 on pattranf
(
pttrcdat,
pttrctim,
dtadmn,
tdate,
ttime,
tward,
tbed
);
revoke all on pattranf from public ; 
grant select on pattranf to public ; 
