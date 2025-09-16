create table mltolnaf
(
  mlolhosp    char(3) default ' ' not null,
  mlolward    char(3) default ' ' not null,
  mlolltyp    char(3) default ' ' not null,
  mlolomin    char(4) default ' ' not null,
  mlolgovm    char(1) default ' ' not null,
  mlolsmsm    char(3) default ' ' not null,
  mlolremn    char(2) default ' ' not null,
  mlolsnpc    char(1) default ' ' not null,
  mlolstws    char(1) default ' ' not null,
  mlolwsmn    char(20) default ' ' not null,
  mlolsnds    char(1) default ' ' not null,
  mlolspmn    char(20) default ' ' not null,
  mlolsndm    char(1) default ' ' not null,
  mlolmamn    char(20) default ' ' not null,
  mlolsndo    char(1) default ' ' not null,
  mlolotmn    char(20) default ' ' not null,
  mloliact    char(1) default ' ' not null,
  mlolcdat    char(8) default ' ' not null,
  mlolctim    char(8) default ' ' not null,
  mlolcuid    char(10) default ' ' not null,
  mloludat    char(8) default ' ' not null,
  mlolutim    char(8) default ' ' not null,
  mloluuid    char(10) default ' ' not null,
  mlolspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index mltolna1 on mltolnaf
(
mlolhosp,
mlolward,
mlolltyp,
mlolomin
);
revoke all on mltolnaf from public ; 
grant select on mltolnaf to public ; 
