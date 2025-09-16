create table allaudln
(
  allnaudd    char(8) default ' ' not null,
  allnaudt    char(8) default ' ' not null,
  allnaudp    char(2) default ' ' not null,
  allnaudr    char(1) default ' ' not null,
  allnauds    decimal(1,0) default 0 not null,
  allnaudo    char(4) default ' ' not null,
  allnvisn    char(8) default ' ' not null,
  allnlnkv    char(8) default ' ' not null,
  allnsite    char(6) default ' ' not null,
  allnclin    char(6) default ' ' not null,
  allndate    char(8) default ' ' not null,
  allnstrt    char(5) default ' ' not null,
  allnslot    char(3) default ' ' not null,
  allnmohr    char(1) default ' ' not null,
  allnrcst    char(1) default ' ' not null,
  allnstat    char(1) default ' ' not null,
  allnspar    char(39) default ' ' not null,
  lf          char(1)
);
create index allaudln on allaudln
(
allnvisn,
allnlnkv,
allnaudd,
allnaudt
);
revoke all on allaudln from public ; 
grant select on allaudln to public ; 
create table alllnkaf
(
  allnvisn    char(8) default ' ' not null,
  allnlnkv    char(8) default ' ' not null,
  allnsite    char(6) default ' ' not null,
  allnclin    char(6) default ' ' not null,
  allndate    char(8) default ' ' not null,
  allnstrt    char(5) default ' ' not null,
  allnslot    char(3) default ' ' not null,
  allnmohr    char(1) default ' ' not null,
  allnrcst    char(1) default ' ' not null,
  allnstat    char(1) default ' ' not null,
  allnspar    char(39) default ' ' not null,
  lf          char(1)
);
create unique index alllnka1 on alllnkaf
(
allnvisn,
allnlnkv
);
create unique index alllnka2 on alllnkaf
(
allnlnkv,
allnvisn
);
create unique index alllnka3 on alllnkaf
(
allnvisn,
allndate,
allnlnkv
);
revoke all on alllnkaf from public ; 
grant select on alllnkaf to public ; 
