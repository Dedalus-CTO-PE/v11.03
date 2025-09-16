create table pmsrugaf
(
  pmruvisn    char(8) default ' ' not null,
  pmruadat    char(8) default ' ' not null,
  pmruatim    char(8) default ' ' not null,
  pmruatyp    char(1) default ' ' not null,
  pmruasso    char(1) default ' ' not null,
  pmrupsdt    char(8) default ' ' not null,
  pmrupedt    char(8) default ' ' not null,
  pmruptyp    char(3) default ' ' not null,
  pmrumtyp    char(3) default ' ' not null,
  pmrubmob    char(1) default ' ' not null,
  pmrutoil    char(1) default ' ' not null,
  pmrutran    char(1) default ' ' not null,
  pmrueatg    char(1) default ' ' not null,
  pmrucuid    char(10) default ' ' not null,
  pmrucdat    char(8) default ' ' not null,
  pmructim    char(8) default ' ' not null,
  pmruuuid    char(10) default ' ' not null,
  pmruudte    char(8) default ' ' not null,
  pmruutim    char(8) default ' ' not null,
  pmrudelf    char(1) default ' ' not null,
  pmruduid    char(10) default ' ' not null,
  pmruddat    char(8) default ' ' not null,
  pmrudtim    char(8) default ' ' not null,
  pmrudres    char(3) default ' ' not null,
  pmrucplt    char(1) default ' ' not null,
  pmrufuid    char(10) default ' ' not null,
  pmrufdat    char(8) default ' ' not null,
  pmruftim    char(8) default ' ' not null,
  pmruspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsruga1 on pmsrugaf
(
pmruvisn,
pmruadat,
pmruatim
);
revoke all on pmsrugaf from public ; 
grant select on pmsrugaf to public ; 
