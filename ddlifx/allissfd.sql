create table allissaf
(
  alisvisn    char(8) default ' ' not null,
  alisisno    char(8) default ' ' not null,
  alisisty    char(3) default ' ' not null,
  alisudc1    char(3) default ' ' not null,
  alisudc2    char(3) default ' ' not null,
  alisudc3    char(3) default ' ' not null,
  alisudc4    char(3) default ' ' not null,
  alisudc5    char(3) default ' ' not null,
  alisudy1    char(1) default ' ' not null,
  alisudy2    char(1) default ' ' not null,
  alisudy3    char(1) default ' ' not null,
  alisudy4    char(1) default ' ' not null,
  alisudy5    char(1) default ' ' not null,
  alisudd1    char(8) default ' ' not null,
  alisudd2    char(8) default ' ' not null,
  alisudd3    char(8) default ' ' not null,
  alisudd4    char(8) default ' ' not null,
  alisudd5    char(8) default ' ' not null,
  alisudt1    char(30) default ' ' not null,
  alisudt2    char(30) default ' ' not null,
  alisudt3    char(30) default ' ' not null,
  alisudt4    char(30) default ' ' not null,
  alisudt5    char(30) default ' ' not null,
  aliscdat    char(8) default ' ' not null,
  alisctim    char(8) default ' ' not null,
  aliscuid    char(10) default ' ' not null,
  alisudat    char(8) default ' ' not null,
  alisutim    char(8) default ' ' not null,
  alisuuid    char(10) default ' ' not null,
  alisspar    char(68) default ' ' not null,
  lf          char(1)
);
create unique index allissa1 on allissaf
(
alisvisn,
alisisno
);
revoke all on allissaf from public ; 
grant select on allissaf to public ; 
