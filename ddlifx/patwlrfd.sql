create table pataudwr
(
ptwraudd    char(8),
ptwraudt    char(8),
ptwraudp    char(2),
ptwraudr    char(1),
ptwrauds    decimal(1,0),
ptwraudo    char(4),
ptwrresi    char(3),
ptwrcomp    char(3),
ptwrward    char(3),
ptwrdept    char(3),
ptwrprdy    decimal(14,2),
ptwrpdes    char(20),
ptwrexdy    decimal(14,2),
ptwredes    char(20),
ptwrspar    char(14),
lf          char(1)
);
create index pataudwr on pataudwr
(
ptwraudd,
ptwraudt,
ptwraudp,
ptwraudr
);
revoke all on pataudwr from public ; 
grant select on pataudwr to public ; 
create table patwlraf
(
ptwrresi    char(3),
ptwrcomp    char(3),
ptwrward    char(3),
ptwrdept    char(3),
ptwrprdy    decimal(14,2),
ptwrpdes    char(20),
ptwrexdy    decimal(14,2),
ptwredes    char(20),
ptwrspar    char(14),
lf          char(1)
);
create unique index patwlra1 on patwlraf
(
ptwrresi,
ptwrcomp,
ptwrward,
ptwrdept
);
revoke all on patwlraf from public ; 
grant select on patwlraf to public ; 
