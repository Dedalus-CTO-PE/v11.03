create table cataudco
(
  ctcoaudd    varchar2(8) default ' ' not null,
  ctcoaudt    varchar2(8) default ' ' not null,
  ctcoaudp    varchar2(2) default ' ' not null,
  ctcoaudr    varchar2(1) default ' ' not null,
  ctcoauds    number(1,0) default 0 not null,
  ctcoaudo    varchar2(4) default ' ' not null,
  dctcoadm    varchar2(8) default ' ' not null,
  ctcodate    varchar2(8) default ' ' not null,
  dctcomea    varchar2(1) default ' ' not null,
  ctcomenu    varchar2(3) default ' ' not null,
  ctcodiet    varchar2(3) default ' ' not null,
  ctcoward    varchar2(3) default ' ' not null,
  ctcosize    number(1,0) default 0 not null,
  ctcostat    number(1,0) default 0 not null,
  ctcobelt    number(1,0) default 0 not null,
  ctcomtyp    number(1,0) default 0 not null,
  ctcoprnt    varchar2(16) default ' ' not null,
  ctcoit01    varchar2(5) default ' ' not null,
  ctcoit02    varchar2(5) default ' ' not null,
  ctcoit03    varchar2(5) default ' ' not null,
  ctcoit04    varchar2(5) default ' ' not null,
  ctcoit05    varchar2(5) default ' ' not null,
  ctcoit06    varchar2(5) default ' ' not null,
  ctcoit07    varchar2(5) default ' ' not null,
  ctcoit08    varchar2(5) default ' ' not null,
  ctcoit09    varchar2(5) default ' ' not null,
  ctcoit10    varchar2(5) default ' ' not null,
  ctcoit11    varchar2(5) default ' ' not null,
  ctcoit12    varchar2(5) default ' ' not null,
  ctcoit13    varchar2(5) default ' ' not null,
  ctcoit14    varchar2(5) default ' ' not null,
  ctcoit15    varchar2(5) default ' ' not null,
  ctcoit16    varchar2(5) default ' ' not null,
  ctcoit17    varchar2(5) default ' ' not null,
  ctcoit18    varchar2(5) default ' ' not null,
  ctcoit19    varchar2(5) default ' ' not null,
  ctcoit20    varchar2(5) default ' ' not null,
  ctcodnam    varchar2(10) default ' ' not null,
  ctcopagn    varchar2(20) default ' ' not null,
  ctcoothr    varchar2(3) default ' ' not null,
  ctcodtyp    varchar2(3) default ' ' not null,
  ctcoalvl    varchar2(3) default ' ' not null,
  ctcospar    varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index cataudco on cataudco
(
ctcoaudd,
ctcoaudt,
ctcoaudp,
ctcoaudr
)
tablespace pas_indx; 
create table catcomaf
(
  dctcoadm    varchar2(8) default ' ' not null,
  ctcodate    varchar2(8) default ' ' not null,
  dctcomea    varchar2(1) default ' ' not null,
  ctcomenu    varchar2(3) default ' ' not null,
  ctcodiet    varchar2(3) default ' ' not null,
  ctcoward    varchar2(3) default ' ' not null,
  ctcosize    number(1,0) default 0 not null,
  ctcostat    number(1,0) default 0 not null,
  ctcobelt    number(1,0) default 0 not null,
  ctcomtyp    number(1,0) default 0 not null,
  ctcoprnt    varchar2(16) default ' ' not null,
  ctcoit01    varchar2(5) default ' ' not null,
  ctcoit02    varchar2(5) default ' ' not null,
  ctcoit03    varchar2(5) default ' ' not null,
  ctcoit04    varchar2(5) default ' ' not null,
  ctcoit05    varchar2(5) default ' ' not null,
  ctcoit06    varchar2(5) default ' ' not null,
  ctcoit07    varchar2(5) default ' ' not null,
  ctcoit08    varchar2(5) default ' ' not null,
  ctcoit09    varchar2(5) default ' ' not null,
  ctcoit10    varchar2(5) default ' ' not null,
  ctcoit11    varchar2(5) default ' ' not null,
  ctcoit12    varchar2(5) default ' ' not null,
  ctcoit13    varchar2(5) default ' ' not null,
  ctcoit14    varchar2(5) default ' ' not null,
  ctcoit15    varchar2(5) default ' ' not null,
  ctcoit16    varchar2(5) default ' ' not null,
  ctcoit17    varchar2(5) default ' ' not null,
  ctcoit18    varchar2(5) default ' ' not null,
  ctcoit19    varchar2(5) default ' ' not null,
  ctcoit20    varchar2(5) default ' ' not null,
  ctcodnam    varchar2(10) default ' ' not null,
  ctcopagn    varchar2(20) default ' ' not null,
  ctcoothr    varchar2(3) default ' ' not null,
  ctcodtyp    varchar2(3) default ' ' not null,
  ctcoalvl    varchar2(3) default ' ' not null,
  ctcospar    varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint catcoma1 primary key( 
dctcoadm,
ctcodate,
dctcomea)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index catcoma2 on catcomaf
(
ctcodate,
dctcomea,
ctcodiet,
dctcoadm
)
  tablespace pas_indx; 
