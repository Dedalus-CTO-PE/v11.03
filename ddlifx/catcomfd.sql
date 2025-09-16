create table cataudco
(
  ctcoaudd    char(8) default ' ' not null,
  ctcoaudt    char(8) default ' ' not null,
  ctcoaudp    char(2) default ' ' not null,
  ctcoaudr    char(1) default ' ' not null,
  ctcoauds    decimal(1,0) default 0 not null,
  ctcoaudo    char(4) default ' ' not null,
  dctcoadm    char(8) default ' ' not null,
  ctcodate    char(8) default ' ' not null,
  dctcomea    char(1) default ' ' not null,
  ctcomenu    char(3) default ' ' not null,
  ctcodiet    char(3) default ' ' not null,
  ctcoward    char(3) default ' ' not null,
  ctcosize    decimal(1,0) default 0 not null,
  ctcostat    decimal(1,0) default 0 not null,
  ctcobelt    decimal(1,0) default 0 not null,
  ctcomtyp    decimal(1,0) default 0 not null,
  ctcoprnt    char(16) default ' ' not null,
  ctcoit01    char(5) default ' ' not null,
  ctcoit02    char(5) default ' ' not null,
  ctcoit03    char(5) default ' ' not null,
  ctcoit04    char(5) default ' ' not null,
  ctcoit05    char(5) default ' ' not null,
  ctcoit06    char(5) default ' ' not null,
  ctcoit07    char(5) default ' ' not null,
  ctcoit08    char(5) default ' ' not null,
  ctcoit09    char(5) default ' ' not null,
  ctcoit10    char(5) default ' ' not null,
  ctcoit11    char(5) default ' ' not null,
  ctcoit12    char(5) default ' ' not null,
  ctcoit13    char(5) default ' ' not null,
  ctcoit14    char(5) default ' ' not null,
  ctcoit15    char(5) default ' ' not null,
  ctcoit16    char(5) default ' ' not null,
  ctcoit17    char(5) default ' ' not null,
  ctcoit18    char(5) default ' ' not null,
  ctcoit19    char(5) default ' ' not null,
  ctcoit20    char(5) default ' ' not null,
  ctcodnam    char(10) default ' ' not null,
  ctcopagn    char(20) default ' ' not null,
  ctcoothr    char(3) default ' ' not null,
  ctcodtyp    char(3) default ' ' not null,
  ctcoalvl    char(3) default ' ' not null,
  ctcospar    char(19) default ' ' not null,
  lf          char(1)
);
create index cataudco on cataudco
(
ctcoaudd,
ctcoaudt,
ctcoaudp,
ctcoaudr
);
revoke all on cataudco from public ; 
grant select on cataudco to public ; 
create table catcomaf
(
  dctcoadm    char(8) default ' ' not null,
  ctcodate    char(8) default ' ' not null,
  dctcomea    char(1) default ' ' not null,
  ctcomenu    char(3) default ' ' not null,
  ctcodiet    char(3) default ' ' not null,
  ctcoward    char(3) default ' ' not null,
  ctcosize    decimal(1,0) default 0 not null,
  ctcostat    decimal(1,0) default 0 not null,
  ctcobelt    decimal(1,0) default 0 not null,
  ctcomtyp    decimal(1,0) default 0 not null,
  ctcoprnt    char(16) default ' ' not null,
  ctcoit01    char(5) default ' ' not null,
  ctcoit02    char(5) default ' ' not null,
  ctcoit03    char(5) default ' ' not null,
  ctcoit04    char(5) default ' ' not null,
  ctcoit05    char(5) default ' ' not null,
  ctcoit06    char(5) default ' ' not null,
  ctcoit07    char(5) default ' ' not null,
  ctcoit08    char(5) default ' ' not null,
  ctcoit09    char(5) default ' ' not null,
  ctcoit10    char(5) default ' ' not null,
  ctcoit11    char(5) default ' ' not null,
  ctcoit12    char(5) default ' ' not null,
  ctcoit13    char(5) default ' ' not null,
  ctcoit14    char(5) default ' ' not null,
  ctcoit15    char(5) default ' ' not null,
  ctcoit16    char(5) default ' ' not null,
  ctcoit17    char(5) default ' ' not null,
  ctcoit18    char(5) default ' ' not null,
  ctcoit19    char(5) default ' ' not null,
  ctcoit20    char(5) default ' ' not null,
  ctcodnam    char(10) default ' ' not null,
  ctcopagn    char(20) default ' ' not null,
  ctcoothr    char(3) default ' ' not null,
  ctcodtyp    char(3) default ' ' not null,
  ctcoalvl    char(3) default ' ' not null,
  ctcospar    char(19) default ' ' not null,
  lf          char(1)
);
create unique index catcoma1 on catcomaf
(
dctcoadm,
ctcodate,
dctcomea
);
create unique index catcoma2 on catcomaf
(
ctcodate,
dctcomea,
ctcodiet,
dctcoadm
);
revoke all on catcomaf from public ; 
grant select on catcomaf to public ; 
