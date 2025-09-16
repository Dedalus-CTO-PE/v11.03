create table priaudex
(
prexaudd    char(8),
prexaudt    char(8),
prexaudp    char(2),
prexaudr    char(1),
prexauds    decimal(1,0),
prexaudo    char(4),
prexclm     char(3),
dprexflg    char(2),
prexitmn    char(9),
prexsubn    char(3),
prexdat1    char(8),
prexchrg    decimal(14,2),
prexdat2    char(8),
prexspar    char(15),
lf          char(1)
);
create index priaudex on priaudex
(
prexaudd,
prexaudt,
prexaudp,
prexaudr
);
revoke all on priaudex from public ; 
grant select on priaudex to public ; 
create table priexcaf
(
prexclm     char(3),
dprexflg    char(2),
prexitmn    char(9),
prexsubn    char(3),
prexdat1    char(8),
prexchrg    decimal(14,2),
prexdat2    char(8),
prexspar    char(15),
lf          char(1)
);
create unique index priexca1 on priexcaf
(
prexclm,
dprexflg,
prexitmn,
prexsubn,
prexdat1
);
revoke all on priexcaf from public ; 
grant select on priexcaf to public ; 
