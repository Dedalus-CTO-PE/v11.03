create table outaudds
(
otdsaudd    char(8),
otdsaudt    char(8),
otdsaudp    char(2),
otdsaudr    char(1),
otdsauds    decimal(1,0),
otdsaudo    char(4),
otdssite    char(6),
otdscode    char(6),
otdsefdt    char(8),
otdseddt    char(8),
otdsdcod    char(3),
otdsspar    char(10),
lf          char(1)
);
create index outaudds on outaudds
(
otdsaudd,
otdsaudt,
otdsaudp,
otdsaudr
);
revoke all on outaudds from public ; 
grant select on outaudds to public ; 
create table outsdiaf
(
otdssite    char(6),
otdscode    char(6),
otdsefdt    char(8),
otdseddt    char(8),
otdsdcod    char(3),
otdsspar    char(10),
lf          char(1)
);
create unique index outsdia1 on outsdiaf
(
otdssite,
otdscode,
otdsefdt
);
create unique index outsdia2 on outsdiaf
(
otdssite,
otdsdcod,
otdsefdt,
otdscode
);
revoke all on outsdiaf from public ; 
grant select on outsdiaf to public ; 
