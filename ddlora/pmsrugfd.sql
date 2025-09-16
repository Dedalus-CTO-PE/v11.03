create table pmsrugaf
(
  pmruvisn    varchar2(8) default ' ' not null,
  pmruadat    varchar2(8) default ' ' not null,
  pmruatim    varchar2(8) default ' ' not null,
  pmruatyp    varchar2(1) default ' ' not null,
  pmruasso    varchar2(1) default ' ' not null,
  pmrupsdt    varchar2(8) default ' ' not null,
  pmrupedt    varchar2(8) default ' ' not null,
  pmruptyp    varchar2(3) default ' ' not null,
  pmrumtyp    varchar2(3) default ' ' not null,
  pmrubmob    varchar2(1) default ' ' not null,
  pmrutoil    varchar2(1) default ' ' not null,
  pmrutran    varchar2(1) default ' ' not null,
  pmrueatg    varchar2(1) default ' ' not null,
  pmrucuid    varchar2(10) default ' ' not null,
  pmrucdat    varchar2(8) default ' ' not null,
  pmructim    varchar2(8) default ' ' not null,
  pmruuuid    varchar2(10) default ' ' not null,
  pmruudte    varchar2(8) default ' ' not null,
  pmruutim    varchar2(8) default ' ' not null,
  pmrudelf    varchar2(1) default ' ' not null,
  pmruduid    varchar2(10) default ' ' not null,
  pmruddat    varchar2(8) default ' ' not null,
  pmrudtim    varchar2(8) default ' ' not null,
  pmrudres    varchar2(3) default ' ' not null,
  pmrucplt    varchar2(1) default ' ' not null,
  pmrufuid    varchar2(10) default ' ' not null,
  pmrufdat    varchar2(8) default ' ' not null,
  pmruftim    varchar2(8) default ' ' not null,
  pmruspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsruga1 primary key( 
pmruvisn,
pmruadat,
pmruatim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
