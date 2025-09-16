create table obscomaf
(
  obcovisn    char(8) default ' ' not null,
  obcoltac    char(1) default ' ' not null,
  obcodiab    char(1) default ' ' not null,
  obcoccal    char(1) default ' ' not null,
  obcoasth    char(1) default ' ' not null,
  obcocihd    char(1) default ' ' not null,
  obcocccf    char(1) default ' ' not null,
  obcohypr    char(1) default ' ' not null,
  obcowoun    char(1) default ' ' not null,
  obcohaem    char(1) default ' ' not null,
  obcocmpe    char(1) default ' ' not null,
  obcocuti    char(1) default ' ' not null,
  obcochin    char(1) default ' ' not null,
  obcocdvt    char(1) default ' ' not null,
  obcoprul    char(1) default ' ' not null,
  obcoothe    char(1) default ' ' not null,
  obcodesc    char(80) default ' ' not null,
  obcofvmo    char(1) default ' ' not null,
  obcovmon    char(80) default ' ' not null,
  obcovdat    char(8) default ' ' not null,
  obcovtim    char(8) default ' ' not null,
  obcoflmo    char(1) default ' ' not null,
  obcolmon    char(80) default ' ' not null,
  obcoldat    char(8) default ' ' not null,
  obcoltim    char(8) default ' ' not null,
  obcofoth    char(1) default ' ' not null,
  obcoothn    char(80) default ' ' not null,
  obcoodat    char(8) default ' ' not null,
  obcootim    char(8) default ' ' not null,
  obcowebc    char(10) default ' ' not null,
  obcodatc    char(8) default ' ' not null,
  obcotimc    char(8) default ' ' not null,
  obcowebu    char(10) default ' ' not null,
  obcodatu    char(8) default ' ' not null,
  obcotimu    char(8) default ' ' not null,
  obcospar    char(80) default ' ' not null,
  lf          char(1)
);
create unique index obscoma1 on obscomaf
(
obcovisn
);
revoke all on obscomaf from public ; 
grant select on obscomaf to public ; 
