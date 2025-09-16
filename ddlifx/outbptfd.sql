create table outbptaf
(
dotbpevn    char(8),
dotbpcnt    char(2),
otbpcode    char(9),
otbpspar    char(30),
lf          char(1)
);
create unique index outbpta1 on outbptaf
(
dotbpevn,
dotbpcnt
);
revoke all on outbptaf from public ; 
grant select on outbptaf to public ; 
