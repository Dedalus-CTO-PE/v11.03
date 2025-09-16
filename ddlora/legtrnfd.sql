create table legtranf
(
  ltward      varchar2(3) default ' ' not null,
  ltbed       varchar2(3) default ' ' not null,
  ltdate      varchar2(8) default ' ' not null,
  lttime      varchar2(8) default ' ' not null,
  ltmove      varchar2(1) default ' ' not null,
  ldturno     varchar2(8) default ' ' not null,
  ldtadmn     varchar2(8) default ' ' not null,
  lptrratf    number(14,2) default 0 not null,
  lptrratg    number(14,2) default 0 not null,
  lpttrdis    number(14,2) default 0 not null,
  lpttrall    number(14,2) default 0 not null,
  ltatype     varchar2(3) default ' ' not null,
  ltadoct     varchar2(6) default ' ' not null,
  lptrrath    number(14,2) default 0 not null,
  lptrxtra    number(14,2) default 0 not null,
  lptradpa    number(14,2) default 0 not null,
  lptradre    number(14,2) default 0 not null,
  ltrcdate    varchar2(8) default ' ' not null,
  ltrctime    varchar2(8) default ' ' not null,
  ltrbtyp     varchar2(3) default ' ' not null,
  ltrbend     number(3,0) default 0 not null,
  ltchstat    varchar2(3) default ' ' not null,
  lpttreps    number(1,0) default 0 not null,
  lpttrrnb    varchar2(3) default ' ' not null,
  lpttrlty    varchar2(3) default ' ' not null,
  lptrlspa    number(14,2) default 0 not null,
  lptrlsre    number(14,2) default 0 not null,
  lpttraen    number(4,0) default 0 not null,
  lpttraua    varchar2(1) default ' ' not null,
  lpttrlts    varchar2(5) default ' ' not null,
  lpttrspa    varchar2(48) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legtran1 primary key( 
ltward,
ltbed,
ltdate,
lttime,
ldtadmn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legtran2 on legtranf
(
ldtadmn,
ltdate,
lttime,
ltward,
ltbed
)
  tablespace pas_indx; 
create unique index legtran3 on legtranf
(
ltadoct,
ltdate,
lttime,
ltward,
ltbed,
ldtadmn
)
  tablespace pas_indx; 
create unique index legtran4 on legtranf
(
ltward,
ltdate,
lttime,
ltbed,
ldtadmn
)
  tablespace pas_indx; 
create unique index legtran5 on legtranf
(
ldturno,
ltward,
ltbed,
ltdate,
lttime,
ldtadmn
)
  tablespace pas_indx; 
