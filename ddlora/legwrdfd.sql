create table legwardf
(
  lwward      varchar2(3) default ' ' not null,
  lwbed       varchar2(3) default ' ' not null,
  lwbdesc     varchar2(20) default ' ' not null,
  dlwadmno    varchar2(8) default ' ' not null,
  lwextn      varchar2(4) default ' ' not null,
  lwbline     number(2,0) default 0 not null,
  lwrtype     varchar2(3) default ' ' not null,
  lwefrbt     varchar2(3) default ' ' not null,
  lwnbeds     number(3,0) default 0 not null,
  lwhcssub    number(3,0) default 0 not null,
  lwserv      varchar2(3) default ' ' not null,
  lwplur      number(1,0) default 0 not null,
  lwinput     number(1,0) default 0 not null,
  lwoccbed    number(3,0) default 0 not null,
  lwclass     varchar2(3) default ' ' not null,
  dlwstby     varchar2(8) default ' ' not null,
  lwactive    number(1,0) default 0 not null,
  lgwrabty    varchar2(3) default ' ' not null,
  lgwrcctr    varchar2(3) default ' ' not null,
  lgwrgldg    varchar2(14) default ' ' not null,
  lwspare     varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legward1 primary key( 
lwward,
lwbed)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legward4 on legwardf
(
dlwstby,
lwward,
lwbed
)
  tablespace pas_indx; 
create unique index legward3 on legwardf
(
lwbed,
lwward
)
  tablespace pas_indx; 
create unique index legward2 on legwardf
(
dlwadmno,
lwward,
lwbed
)
  tablespace pas_indx; 
