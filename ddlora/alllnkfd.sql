create table allaudln
(
  allnaudd    varchar2(8) default ' ' not null,
  allnaudt    varchar2(8) default ' ' not null,
  allnaudp    varchar2(2) default ' ' not null,
  allnaudr    varchar2(1) default ' ' not null,
  allnauds    number(1,0) default 0 not null,
  allnaudo    varchar2(4) default ' ' not null,
  allnvisn    varchar2(8) default ' ' not null,
  allnlnkv    varchar2(8) default ' ' not null,
  allnsite    varchar2(6) default ' ' not null,
  allnclin    varchar2(6) default ' ' not null,
  allndate    varchar2(8) default ' ' not null,
  allnstrt    varchar2(5) default ' ' not null,
  allnslot    varchar2(3) default ' ' not null,
  allnmohr    varchar2(1) default ' ' not null,
  allnrcst    varchar2(1) default ' ' not null,
  allnstat    varchar2(1) default ' ' not null,
  allnspar    varchar2(39) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index allaudln on allaudln
(
allnvisn,
allnlnkv,
allnaudd,
allnaudt
)
tablespace pas_indx; 
create table alllnkaf
(
  allnvisn    varchar2(8) default ' ' not null,
  allnlnkv    varchar2(8) default ' ' not null,
  allnsite    varchar2(6) default ' ' not null,
  allnclin    varchar2(6) default ' ' not null,
  allndate    varchar2(8) default ' ' not null,
  allnstrt    varchar2(5) default ' ' not null,
  allnslot    varchar2(3) default ' ' not null,
  allnmohr    varchar2(1) default ' ' not null,
  allnrcst    varchar2(1) default ' ' not null,
  allnstat    varchar2(1) default ' ' not null,
  allnspar    varchar2(39) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint alllnka1 primary key( 
allnvisn,
allnlnkv)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index alllnka2 on alllnkaf
(
allnlnkv,
allnvisn
)
  tablespace pas_indx; 
create unique index alllnka3 on alllnkaf
(
allnvisn,
allndate,
allnlnkv
)
  tablespace pas_indx; 
