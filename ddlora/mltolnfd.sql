create table mltolnaf
(
  mlolhosp    varchar2(3) default ' ' not null,
  mlolward    varchar2(3) default ' ' not null,
  mlolltyp    varchar2(3) default ' ' not null,
  mlolomin    varchar2(4) default ' ' not null,
  mlolgovm    varchar2(1) default ' ' not null,
  mlolsmsm    varchar2(3) default ' ' not null,
  mlolremn    varchar2(2) default ' ' not null,
  mlolsnpc    varchar2(1) default ' ' not null,
  mlolstws    varchar2(1) default ' ' not null,
  mlolwsmn    varchar2(20) default ' ' not null,
  mlolsnds    varchar2(1) default ' ' not null,
  mlolspmn    varchar2(20) default ' ' not null,
  mlolsndm    varchar2(1) default ' ' not null,
  mlolmamn    varchar2(20) default ' ' not null,
  mlolsndo    varchar2(1) default ' ' not null,
  mlolotmn    varchar2(20) default ' ' not null,
  mloliact    varchar2(1) default ' ' not null,
  mlolcdat    varchar2(8) default ' ' not null,
  mlolctim    varchar2(8) default ' ' not null,
  mlolcuid    varchar2(10) default ' ' not null,
  mloludat    varchar2(8) default ' ' not null,
  mlolutim    varchar2(8) default ' ' not null,
  mloluuid    varchar2(10) default ' ' not null,
  mlolspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mltolna1 primary key( 
mlolhosp,
mlolward,
mlolltyp,
mlolomin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
