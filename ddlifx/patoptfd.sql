create table patoptnf
(
ptopprog    char(8),
ptopop1     decimal(1,0),
ptopop2     decimal(1,0),
ptopop3     decimal(1,0),
ptopop4     decimal(1,0),
ptopop5     decimal(1,0),
ptopop6     decimal(1,0),
ptopop7     decimal(1,0),
ptopop8     decimal(1,0),
ptopop9     decimal(1,0),
ptopop10    decimal(1,0),
ptopop11    decimal(1,0),
ptopop12    decimal(1,0),
ptopop13    decimal(1,0),
ptopop14    decimal(1,0),
ptopop15    decimal(1,0),
ptopop16    decimal(1,0),
ptopop17    decimal(1,0),
ptopop18    decimal(1,0),
ptopop19    decimal(1,0),
ptopop20    decimal(1,0),
ptopop21    decimal(1,0),
ptopop22    decimal(1,0),
ptopop23    decimal(1,0),
ptopop24    decimal(1,0),
ptopop25    decimal(1,0),
ptopop26    decimal(1,0),
ptopop27    decimal(1,0),
ptopop28    decimal(1,0),
ptopop29    decimal(1,0),
ptopop30    decimal(1,0),
ptopspar    char(59),
lf          char(1)
);
create unique index patoptn1 on patoptnf
(
ptopprog
);
revoke all on patoptnf from public ; 
grant select on patoptnf to public ; 
