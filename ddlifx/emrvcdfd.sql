create table emrvcdaf
(
  emvcvist    char(8) default ' ' not null,
  emvctype    char(3) default ' ' not null,
  emvcuniq    char(3) default ' ' not null,
  emvccsys    decimal(2,0) default 0 not null,
  emvcmncd    char(10) default ' ' not null,
  emvcsequ    char(3) default ' ' not null,
  emvcdate    char(8) default ' ' not null,
  emvctime    char(8) default ' ' not null,
  emvcudc1    char(3) default ' ' not null,
  emvcudc2    char(3) default ' ' not null,
  emvcudc3    char(3) default ' ' not null,
  emvcudc4    char(3) default ' ' not null,
  emvcudr1    char(40) default ' ' not null,
  emvcudr2    char(40) default ' ' not null,
  emvcuyn1    char(1) default ' ' not null,
  emvcuyn2    char(1) default ' ' not null,
  emvcuyn3    char(1) default ' ' not null,
  emvcuyn4    char(1) default ' ' not null,
  emvcuda1    decimal(14,2) default 0 not null,
  emvcuda2    decimal(14,2) default 0 not null,
  emvcuda3    decimal(14,2) default 0 not null,
  emvcuda4    decimal(14,2) default 0 not null,
  emvcudd1    char(8) default ' ' not null,
  emvcudd2    char(8) default ' ' not null,
  emvcudd3    char(8) default ' ' not null,
  emvcudd4    char(8) default ' ' not null,
  emvcudt1    char(8) default ' ' not null,
  emvcudt2    char(8) default ' ' not null,
  emvcudt3    char(8) default ' ' not null,
  emvcudt4    char(8) default ' ' not null,
  emvceflg    char(1) default ' ' not null,
  emvcludt    char(8) default ' ' not null,
  emvclutm    char(8) default ' ' not null,
  emvcwusr    char(10) default ' ' not null,
  emvcdele    char(1) default ' ' not null,
  emvccdat    char(8) default ' ' not null,
  emvcctim    char(8) default ' ' not null,
  emvccuid    char(10) default ' ' not null,
  emvcsubn    char(3) default ' ' not null,
  emvcedad    char(10) default ' ' not null,
  emvcftxt    char(100) default ' ' not null,
  emvcspar    char(25) default ' ' not null,
  lf          char(1)
);
create unique index emrvcda1 on emrvcdaf
(
emvcvist,
emvctype,
emvcuniq
);
create unique index emrvcda2 on emrvcdaf
(
emvcvist,
emvctype,
emvcsequ,
emvcuniq
);
revoke all on emrvcdaf from public ; 
grant select on emrvcdaf to public ; 
