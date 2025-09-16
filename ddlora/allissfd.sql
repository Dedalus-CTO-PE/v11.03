create table allissaf
(
  alisvisn    varchar2(8) default ' ' not null,
  alisisno    varchar2(8) default ' ' not null,
  alisisty    varchar2(3) default ' ' not null,
  alisudc1    varchar2(3) default ' ' not null,
  alisudc2    varchar2(3) default ' ' not null,
  alisudc3    varchar2(3) default ' ' not null,
  alisudc4    varchar2(3) default ' ' not null,
  alisudc5    varchar2(3) default ' ' not null,
  alisudy1    varchar2(1) default ' ' not null,
  alisudy2    varchar2(1) default ' ' not null,
  alisudy3    varchar2(1) default ' ' not null,
  alisudy4    varchar2(1) default ' ' not null,
  alisudy5    varchar2(1) default ' ' not null,
  alisudd1    varchar2(8) default ' ' not null,
  alisudd2    varchar2(8) default ' ' not null,
  alisudd3    varchar2(8) default ' ' not null,
  alisudd4    varchar2(8) default ' ' not null,
  alisudd5    varchar2(8) default ' ' not null,
  alisudt1    varchar2(30) default ' ' not null,
  alisudt2    varchar2(30) default ' ' not null,
  alisudt3    varchar2(30) default ' ' not null,
  alisudt4    varchar2(30) default ' ' not null,
  alisudt5    varchar2(30) default ' ' not null,
  aliscdat    varchar2(8) default ' ' not null,
  alisctim    varchar2(8) default ' ' not null,
  aliscuid    varchar2(10) default ' ' not null,
  alisudat    varchar2(8) default ' ' not null,
  alisutim    varchar2(8) default ' ' not null,
  alisuuid    varchar2(10) default ' ' not null,
  alisspar    varchar2(68) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allissa1 primary key( 
alisvisn,
alisisno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
