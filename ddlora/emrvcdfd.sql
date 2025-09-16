create table emrvcdaf
(
  emvcvist    varchar2(8) default ' ' not null,
  emvctype    varchar2(3) default ' ' not null,
  emvcuniq    varchar2(3) default ' ' not null,
  emvccsys    number(2,0) default 0 not null,
  emvcmncd    varchar2(10) default ' ' not null,
  emvcsequ    varchar2(3) default ' ' not null,
  emvcdate    varchar2(8) default ' ' not null,
  emvctime    varchar2(8) default ' ' not null,
  emvcudc1    varchar2(3) default ' ' not null,
  emvcudc2    varchar2(3) default ' ' not null,
  emvcudc3    varchar2(3) default ' ' not null,
  emvcudc4    varchar2(3) default ' ' not null,
  emvcudr1    varchar2(40) default ' ' not null,
  emvcudr2    varchar2(40) default ' ' not null,
  emvcuyn1    varchar2(1) default ' ' not null,
  emvcuyn2    varchar2(1) default ' ' not null,
  emvcuyn3    varchar2(1) default ' ' not null,
  emvcuyn4    varchar2(1) default ' ' not null,
  emvcuda1    number(14,2) default 0 not null,
  emvcuda2    number(14,2) default 0 not null,
  emvcuda3    number(14,2) default 0 not null,
  emvcuda4    number(14,2) default 0 not null,
  emvcudd1    varchar2(8) default ' ' not null,
  emvcudd2    varchar2(8) default ' ' not null,
  emvcudd3    varchar2(8) default ' ' not null,
  emvcudd4    varchar2(8) default ' ' not null,
  emvcudt1    varchar2(8) default ' ' not null,
  emvcudt2    varchar2(8) default ' ' not null,
  emvcudt3    varchar2(8) default ' ' not null,
  emvcudt4    varchar2(8) default ' ' not null,
  emvceflg    varchar2(1) default ' ' not null,
  emvcludt    varchar2(8) default ' ' not null,
  emvclutm    varchar2(8) default ' ' not null,
  emvcwusr    varchar2(10) default ' ' not null,
  emvcdele    varchar2(1) default ' ' not null,
  emvccdat    varchar2(8) default ' ' not null,
  emvcctim    varchar2(8) default ' ' not null,
  emvccuid    varchar2(10) default ' ' not null,
  emvcsubn    varchar2(3) default ' ' not null,
  emvcedad    varchar2(10) default ' ' not null,
  emvcftxt    varchar2(100) default ' ' not null,
  emvcspar    varchar2(25) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrvcda1 primary key( 
emvcvist,
emvctype,
emvcuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrvcda2 on emrvcdaf
(
emvcvist,
emvctype,
emvcsequ,
emvcuniq
)
  tablespace pas_indx; 
